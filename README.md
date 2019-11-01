# Semver (Semantic Version)
semver is a functionality built in C, that compares two semantic versions of a dependency. The inputs allow for multiple comparisons, 
which are passed in as follows: 

Valid Input = "\<Valid Semantic Version String\> {any whitespace} \<Valid Semantic Version String\> {any whitespace}>"

Valid Semantic Version String = \<major\>.\<minor\>.\<patch\>-\<pre-release version\>.\<pre-release number\>

To use with NodeJS:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1 - ```git clone https://github.com/coolguycam/semver.git <semver_repo>``` (add repo to root of project)<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2 - ```npm install -g node-gyp```<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3 - ```cd <semver_repo>```<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;4 - ```node-gyp configure --msvs_version=2015```<br>
