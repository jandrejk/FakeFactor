import ROOT as R
import sys
R.gROOT.SetBatch(True)

channel = sys.argv[1]

fileDict = {
    "et" : ["uncertainties_TT", "uncertainties_QCD_W"],
    "mt" : ["uncertainties_TT", "uncertainties_QCD_W"],
    "tt" : ["uncertainties_QCD_W"]
}


for unc in fileDict[channel] :

    inputFile = R.TFile("ff_2d/{}/incl/{}.root".format(channel,unc))


    found_up = False
    found_down = False
    canvas = R.TCanvas()
    for k in inputFile.GetListOfKeys() :
        name = k.GetName()
    
        if "_mvis_" in name or "_pt_" in name or "_lepPt_" in name or "_mt_" in name:
            if "up" in name :
                save_name = "_".join(name.split("_")[:-1])
                histo_up = inputFile.Get(name)
                histo_up.GetYaxis().SetRangeUser(-0.5,0.5)
                found_up = True
                
            elif "down" in name :
                histo_down = inputFile.Get(name)
                histo_down.SetLineColor(2)
                found_down = True
            
            if (found_up and found_down) :            
                histo_up.SetTitle(save_name)
                histo_up.Draw()
                histo_down.Draw("same")
                leg = R.TLegend(0.1,0.7,0.48,0.9)
                leg.AddEntry(histo_up,"shift, morphed up","l")
                leg.AddEntry(histo_down,"shift, morphed down","l")
                leg.Draw()
                canvas.SetLogx()
                for ext in ["pdf", "png"]:
                    canvas.SaveAs("Images_EMB/data_{}/{}.{}".format(channel,save_name,ext))
                found_up = False
                found_down = False
    inputFile.Close()
