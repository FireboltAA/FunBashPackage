#! binb/sh

if grep -Fxq "export PATH=\$PATH:/home/$USER/fun_package/" ~/.bashrc
then
     echo -e "\x1b[33mDuplicate path found, Path not changed.\x1b[0m"
else
     cd
     echo -e "\x1b[33mBacking up .bashrc to .bashrc.bak in directory /home/$USER/\x1b[0m . . ."
     cp .bashrc .bashrc.bak
     echo -e "\x1b[33mAdding path to .bashrc in directory /home/$USER/\x1b[0m . . ."
     echo "export PATH=\$PATH:/home/$USER/fun_package/" >> ~/.bashrc
fi


if [[ -d "/home/$USER/fun_package" ]]
then
     echo -e  "Would you like to delete duplicate directory \"fun_package\"? (It is advised that you do if you have installed this package previously).\n"
     read -p "[y/n]" -n 1 -r
     echo -e "\n"
     if [[ $REPLY =~ ^[Yy]$ ]]
     then
         echo -e "\x1b[33mRemoving directory \"fun_package/\"\x1b[0m . . ."
         rm -rf fun_package/
         echo -e "\x1b[33mMaking directory \"fun_package/\" in directory /home/$USER/\x1b[0m . . ."
     fi
fi

cd
cd fun_package
wget "https://raw.githubusercontent.com/HeroFirebolt/FunBashPackage/master/sourceCode/sourceRoll.c"
gcc sourceRoll.c -o roll
rm sourceRoll.c
chmod +x roll

wget "https://raw.githubusercontent.com/HeroFirebolt/FunBashPackage/master/sourceCode/sourceGTN.c"
gcc sourceGTN.c -o GTN
rm sourceGTN.c
chmod +x GTN

wget "https://raw.githubusercontent.com/HeroFirebolt/FunBashPackage/master/sourceCode/sourceFlip.c"
gcc sourceFlip.c -o flip
rm sourceFlip.c
chmod +x flip
source ~/.bashrc/bin/bash: bin/sh: No such file or directory
