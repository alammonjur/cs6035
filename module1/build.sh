#!/usr/bin/sh


sudo apt-get install npm
sudo apt-get install nodejs-legacy
sudo apt-get install ruby-dev

#nodejs
sudo npm install -g bower
sudo npm install -g grunt-cli
sudo npm install -g yo

#ruby
sudo npm install -g generator-angular
sudo gem install sass
sudo gem install compass


sudo npm install
sudo bower install --allow-root

sudo grunt serve --force
#sudo grunt build  --force






