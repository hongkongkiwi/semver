# Semver (Semantic Version)
Semver is a functionality that compares two semantic versions of a dependency. It uses the Emscripten SDK to compile C source code into a usable JavaScript module. 



The inputs allow for multiple comparisons, 
which are passed in as follows: 

Valid Input = "\<Valid Semantic Version String\> {any whitespace} \<Valid Semantic Version String\> {any whitespace}>"

Valid Semantic Version String = \<major\>.\<minor\>.\<patch\>-\<pre-release version\>.\<pre-release number\><br>****for reference https://semver.org/***



Follow the steps to build JS semver module:<br><br>
1) Download and Install the core Emscripten SDK (emsdk) driver<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - ```git clone https://github.com/emscripten-core/emsdk.git && cd emsdk/```<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - ```./emsdk install latest && ./emsdk activate latest``` <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - ```source ./emsdk_env.sh``` <br><br>
2) Clone this repository into any working directory<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - ```git clone https://github.com/coolguycam/semver.git && cd semver/``` <br> <br>
In order to compile JavaScript module, we must compile with the following command:<br>
```console
$ emcc semver/srcs/*.c -o semver.js
```
<br>
3) Import the semver module into any JavaScript file like so:<br>
```code
const semver = require('PATH_TO_SEMVER/semver.js');
``` 
