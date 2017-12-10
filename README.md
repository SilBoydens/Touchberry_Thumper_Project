# Touchberry_Thumper_Project

## Dependencies : 

`sudo apt-get update && sudo apt-get install git build-essential autoconf automake libtool libcurl4-gnutls-dev`

----------------------------------------------------------------------------------------------------------------

## Compiling the library :

```
sudo su
cd /usr/local/src
git clone https://github.com/mrtazz/restclient-cpp.git
cd restclient-cpp
./autogen.sh
./configure
make install
ldconfig
exit
```
------------------------------------------------------------------------------------------------------------------------------

## Compiling the program :
```
git clone https://github.com/SilBoydens/Touchberry_Thumper_Project
cd Touchberry_Thumper_Project
make
```

------------------------------------------------------------------------------------------------------------------------------
## Executing the application : 

`./bin/touchshield`
