#!/bin/bash
# steerAll.sh   #to run all
# steerAll.sh 1 #skip preselection (any other argument works as well)

# extract channel, whether to use embedding, output directory and analysis name
channel=$(grep 'int CHAN' "Settings.h" | awk -F'[=;]' '{print $2}')
embedding=$(grep '#define EMB' "Settings.h" | awk -F'[B]' '{print $2}')
output=$(grep 'output_folder' "Settings.h" | awk -F'[=;]' '{print $2}' | tr -d '"')
analysis=$(grep 'analysis' "Settings.h" | awk -F'[=;]' '{print $2}' | tr -d '"')
#dc_path=$(grep 'DC_folder' "Settings.h" | awk -F'[=;]' '{print $2}' | tr -d '"')

if [ "$channel" == " kEL" ];  then chan="et"; fi
if [ "$channel" == " kMU" ];  then chan="mt"; fi
if [ "$channel" == " kTAU" ]; then chan="tt"; fi
echo Channel: $chan
echo Output: $output
echo Embedding: $embedding
echo User: $USER
echo Name: $analysis
# #echo $dc_path

# no entire sure but probably the correct inputs are placed
#sed s/user=\"whoami\"/user=\"$USER\"/g Settings.h >/tmp/Settings$USER.h
#yes | mv /tmp/Settings$USER.h Settings.h
# correct user and FFanalysisName are set in BuildStructure.sh --> NO need to set it manually
sed s/user=user/user=$USER/g BuildStructure_template.sh >/tmp/BuildStructure$USER.sh
yes | mv /tmp/BuildStructure$USER.sh BuildStructure0.sh
sed s/fftype=fftype/fftype=$analysis/g BuildStructure0.sh >/tmp/BuildStructure$USER.sh
yes | mv /tmp/BuildStructure$USER.sh BuildStructure.sh
yes | rm BuildStructure0.sh

ff_tocheck='ff_QCD_dm?_njet?_??.pdf ff_QCD_AI_dm?_njet?_??.pdf'
if [ "$channel" != " kTAU" ]; then ff_tocheck+=' ff_Wjets_dm?_njet?_??.pdf ff_Wjets_MC_dm?_njet?_??.pdf ff_TT_dm?_njet?_??.pdf'; fi

sh BuildStructure.sh

echo "Compiling the framework"
cd ../

if [ $embedding == 1 ]; then
    mv ViennaTool/NtupleClass.h ViennaTool/NtupleClass_NonEMB.h
    mv ViennaTool/NtupleClass_EMB.h ViennaTool/NtupleClass.h
    make -B
    ./Preselection_EMB
    mv ViennaTool/NtupleClass.h ViennaTool/NtupleClass_EMB.h
    mv ViennaTool/NtupleClass_NonEMB.h ViennaTool/NtupleClass.h
fi

make -B

# ./Preselection

# ./SRHisto  
# ./CRHisto
# # #exit 0
# ./steerFF
# ./fitFakeFactors

# if [ $embedding == 0 ]; then 
#      cd ViennaTool/Images_NonEMB/data_$chan
#      #gs -dSAFER -dBATCH -dNOPAUSE -q -sDEVICE=pdfwrite -sOutputFile=toCheck.pdf ff_QCD_dm?_njet?_??.pdf ff_QCD_AI_dm?_njet?_??.pdf ff_Wjets_dm?_njet?_??.pdf ff_Wjets_MC_dm?_njet?_??.pdf ff_TT_dm?_njet?_??.pdf
#      gs -dSAFER -dBATCH -dNOPAUSE -q -sDEVICE=pdfwrite -sOutputFile=toCheck.pdf $ff_tocheck
#      cd -
# fi
# if [ $embedding == 1 ]; then 
#      cd ViennaTool/Images_EMB/data_$chan
#      #gs -dSAFER -dBATCH -dNOPAUSE -q -sDEVICE=pdfwrite -sOutputFile=toCheck.pdf ff_QCD_dm?_njet?_??.pdf ff_QCD_AI_dm?_njet?_??.pdf ff_Wjets_dm?_njet?_??.pdf ff_Wjets_MC_dm?_njet?_??.pdf ff_TT_dm?_njet?_??.pdf
#      gs -dSAFER -dBATCH -dNOPAUSE -q -sDEVICE=pdfwrite -sOutputFile=toCheck.pdf $ff_tocheck
#      cd -
# fi

# ./calcCorrections
# python plotCorrections.py --channel $channel --embedding $embedding
# # exit 0
# ./convert_inputs


# python cpTDHaftPublic.py --destination $output --channel $channel --embedding $embedding
# python producePublicFakeFactors.py --input $output --channel $channel --embedding $embedding

# #python cpPublicFFtoDC.py --source $output --destination $dc_path --channel $channel

# rm $output/constant.root

# echo "------ END OF steerAll.sh ---------"
