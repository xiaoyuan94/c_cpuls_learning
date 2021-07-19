1,mysql

    sudo apt-get install libmysqlclient-dev

2,json

    sudo apt-get install libjsoncpp-dev

3,gtest 

    sudo apt-get install libgtest-dev
    cd /usr/src/gtest
    #没有安装Cmake的请先安装cmake
    sudo mkdir build
    cd build
    sudo cmake ..  #一定要以sudo的方式运行，否则没有写入权限
    sudo make      #这个也一样要以sudo的方式
    sudo cp libgtest*.a /usr/local/lib