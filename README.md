# Semver (Semantic Version)
Semver is a functionality that compares two semantic versions of a dependency. It uses the Emscripten SDK to compile my C source code into a useful JavaScript module. ***-reference https://semver.org/***



The methods used are `compare`, `to_string` & `to_obj`. 
Methods are accessed as follows:<br>


Follow the steps to build semver.js module:<br>
1) Download and Install the core Emscripten SDK (emsdk) driver<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - ```git clone https://github.com/emscripten-core/emsdk.git && cd emsdk/```<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - ```./emsdk install latest && ./emsdk activate latest``` <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - ```source ./emsdk_env.sh``` <br><br>
2) Clone this repository into any working directory<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - ```git clone https://github.com/coolguycam/semver.git && cd semver/``` <br><br>
3) In order to use JavaScript module, we must compile with the following command:<br>
```console
$ emcc srcs/*.c -o semver.js -s EXPORTED_FUNCTIONS=['_main']
```
<br>
Import the semver module into any JavaScript file:<br>

    const semver = require('PATH_TO_SEMVER/semver.js');
