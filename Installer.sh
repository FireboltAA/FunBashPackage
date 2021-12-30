#! binb/sh

_true=1

isCustDir=0

execPathCMD="if [ -d \"\$HOME/.exec\" ] ; then\n    PATH=\"\$HOME/.exec:\$PATH\"\nfi"



echo -e "Do you already have a personal directory in your PATH variable? If not, this program will\ncreate one for you. Otherwise, you can set any directory as long as it is in your PATH variable."

read -p "|[y/n]: " -n 2 -r
if [[ $REPLY =~ ^[Yy]$ ]]
then
        echo -e "Please input full path to a valid PATH directory (max 20 characters): "
        read -n 20 -r
        custDir=$REPLY
        isCustDir=1
elif [[ $REPLY =~ ^[Nn]$ ]]
then
        cd  
        echo -e "Creating new directory \'.exec\'...\n"
        mkdir .exec
        echo -e "Creating command in .bashrc to add .exec folder to PATH...\n"
        shopt -s xpg_echo
        echo "$execPathCMD" >> /home/$USER/.bashrc
        shopt -u xpg_echo
fi



cd

if [ $isCustDir = $_true ]
then
        cd "$custDir"
else
        cd .exec
fi

wget "https://raw.githubusercontent.com/HeroFirebolt/FunBashPackage/master/cmds/Roll.c"
gcc sourceRoll.c -o roll
rm sourceRoll.c
chmod +x roll

wget "https://raw.githubusercontent.com/HeroFirebolt/FunBashPackage/master/cmds/GTN.c"
gcc sourceGTN.c -o GTN 
rm sourceGTN.c
chmod +x GTN 

wget "https://raw.githubusercontent.com/HeroFirebolt/FunBashPackage/master/cmds/Flip.c"
gcc sourceFlip.c -o flip
rm sourceFlip.c
chmod +x flip
source $HOME/.bashrc

