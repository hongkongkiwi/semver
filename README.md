# Semver (Semantic Version)
Semver is a functionality that compares two semantic versions of a dependency. The inputs allow for multiple comparisons, 
which are passed in as follows: 

Valid Input = "\<Valid Semantic Version String\> {any whitespace} \<Valid Semantic Version String\> {any whitespace}>"

Valid Semantic Version String = \<major\>.\<minor\>.\<patch\>-\<pre-release version\>.\<pre-release number\><br>****for reference https://semver.org/***

Follow the steps for building Semver:<br><br>

Compilation<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - ```git clone https://github.com/emscripten-core/emsdk.git```<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - ```cd emsdk/``` <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - ```./emsdk install latest``` <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - ```./emsdk activate latest``` <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - ```source ./emsdk_env.sh``` <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - ```cd ../``` <br><br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - ```git clone https://github.com/coolguycam/semver.git``` <br> <br>


To use, add
```const semver = require('./build/Release/semver');``` 
