# Touchberry_Thumper_Project

Dependencies : 

sudo apt-get update && sudo apt-get install git build-essential autoconf automake libtool libcurl4-gnutls-dev

----------------------------------------------------------------------------------------------------------------

Compiling the library :

sudo su

cd /usr/local/src

git clone https://github.com/mrtazz/restclient-cpp.git

cd restclient-cpp

./autogen.sh

./configure

make install

ldconfig

------------------------------------------------------------------------------------------------------------------------------

Compiling the program :

make clean

make

------------------------------------------------------------------------------------------------------------------------------
Executing the application : 

./touchshield
