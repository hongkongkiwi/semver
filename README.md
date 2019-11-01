# Semver (Semantic Version)
Semver is a functionality that compares two semantic versions of a dependency. The inputs allow for multiple comparisons, 
which are passed in as follows: 

Valid Input = "\<Valid Semantic Version String\> {any whitespace} \<Valid Semantic Version String\> {any whitespace}>"

Valid Semantic Version String = \<major\>.\<minor\>.\<patch\>-\<pre-release version\>.\<pre-release number\><br>****for reference https://semver.org/***

#To use with NodeJS or Python v2.7 (v3.x.x ***not*** supported!):<br><br>#
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - ```git clone https://github.com/coolguycam/semver.git <semver_repo>``` (add repo to /src of project)<br>#
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - ```npm install -g node-gyp```<br>#
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - ```cd <semver_repo>```<br>#
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - ```node-gyp configure --msvs_version=2015```<br>#
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - ```node-gyp build``` <br>#<br>#

#Now you have your compiled .node bindings file! The compiled bindings end up in build/Debug/ or build/Release/, depending on the build mode. At this point, you can require the .node file with Node.js and run your tests!

To use, add
```const semver = require('./build/Release/semver');``` **
