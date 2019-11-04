gcc -Wall -Wextra -Werror src/libc.c src/utils.c src/main.c -o semver.exe



echo "This is the test script.\nThe following exercises test valid inputs using -s method:\n"


echo "0 - INPUT >./semver.exe -s \"1.1.1  \""
./semver.exe -s "1.1.1  "

echo "\n1 - INPUT >./semver.exe -s \"1.1.1-alpha\""
./semver.exe -s "1.1.1-alpha"

echo "\n2 - INPUT >./semver.exe -s \"1.1.1+meta\""
./semver.exe -s "1.1.1+meta"

echo "\n3 - INPUT >./semver.exe -s \"1.1.1-alpha+meta\""
./semver.exe -s "1.1.1-alpha+meta"

echo "\n4 - INPUT >./semver.exe -s \"1.0.0-0.3.7\""
./semver.exe -s "1.0.0-0.3.7"

echo "\n5 - INPUT >./semver.exe -s \"1.0.0-x.7.z.92\""
./semver.exe -s "1.0.0-x.7.z.92"

echo "\n6 - INPUT >./semver.exe -s \"1.0.0+20130313144700\""
./semver.exe -s "1.0.0+20130313144700"

echo "\n7 - INPUT >./semver.exe -s \"1.0.0-beta+exp.sha.5114f85\""
./semver.exe -s "1.0.0-beta+exp.sha.5114f85"

echo "\n8 - INPUT >./semver.exe -s \"4.2.3-beta\""
./semver.exe -s "4.2.3-beta"

echo "\n9 - INPUT >./semver.exe -s \"18.7.13-A.xyz+0012033049\""
./semver.exe -s "18.7.13-A.xyz+0012033049"





echo "\n\n\nThis next section is testing valid inputs with the -v method:"


echo "\n10 - INPUT >./semver.exe -v \"1.1.1\""
./semver.exe -v "1.1.1"

echo "\n11 - INPUT >./semver.exe -v \"1.1.1-alpha\""
./semver.exe -v "1.1.1-alpha"

echo "\n12 - INPUT >./semver.exe -v \"1.1.1+meta\""
./semver.exe -v "1.1.1+meta"

echo "\n13 - INPUT >./semver.exe -v \"1.1.1-alpha+meta\""
./semver.exe -v "1.1.1-alpha+meta"

echo "\n14 - INPUT >./semver.exe -v \"1.0.0-0.3.7\""
./semver.exe -v "1.0.0-0.3.7"

echo "\n15 - INPUT >./semver.exe -v \"1.0.0-x.7.z.92\""
./semver.exe -v "1.0.0-x.7.z.92"

echo "\n16 - INPUT >./semver.exe -v \"1.0.0+20130313144700\""
./semver.exe -v "1.0.0+20130313144700"

echo "\n17 - INPUT >./semver.exe -v \"1.0.0-beta+exp.sha.5114f85\""
./semver.exe -v "1.0.0-beta+exp.sha.5114f85"

echo "\n18 - INPUT >./semver.exe -v \"4.2.3-beta\""
./semver.exe -v "4.2.3-beta"

echo "\n19 - INPUT >./semver.exe -v \"18.7.13-A.xyz+0012033049\""
./semver.exe -v "18.7.13-A.xyz+0012033049"





echo "\n\nThis next section is testing valid inputs with the -c method:"


echo "\n20 - INPUT >./semver.exe -c \"1.1.1 1.0.1   \""
./semver.exe -c "1.1.1 1.0.1    "

echo "\n21 - INPUT >./semver.exe -c \"1.0.1   1.1.1\""
./semver.exe -c "1.0.1   1.1.1"

echo "\n22 - INPUT >./semver.exe -c \"1.1.1-alpha 1.1.1-beta\""
./semver.exe -c "1.1.1-alpha 1.1.1-beta  "

echo "\n23 - INPUT >./semver.exe -c \"1.1.1-alpha    1.1.1-alpha\""
./semver.exe -c "1.1.1-alpha    1.1.1-alpha"

echo "\n24 - INPUT >./semver.exe -c \"1.0.0-beta+exp.sha.5114   1.0.0-beta+exp.sha.5114f85\""
./semver.exe -c "1.0.0-beta+exp.sha.5114   1.0.0-beta+exp.sha.5114f85"

echo "\n25 - INPUT >./semver.exe -c \"1.0.0-x.2.z.92   1.0.0-x.7.z.92    \""
./semver.exe -c "1.0.0-x.2.z.92  1.0.0-x.7.z.92    "

echo "\n26 - INPUT >./semver.exe -c \"1.0.0+2013031 1.0.0+2013011\""
./semver.exe -c "1.0.0+20130313144700  1.0.0+20130113144700"

echo "\n27 - INPUT >./semver.exe -c \"12.3.6 1.4.2\""
./semver.exe -c "12.3.6 1.4.2"

echo "\n28 - INPUT >./semver.exe -c \"4.2.3-beta 4.2.3-alpha\""
./semver.exe -c "4.2.3-beta 4.2.3-alpha"

echo "\n29 - INPUT >./semver.exe -c \"4.2.3-alpha 4.2.3-alpha\""
./semver.exe -c "4.2.3-alpha 4.2.3-alpha"





echo "\n\nThis next section is testing invalid inputs with the -c && -s methods:\n(the -v method uses string_to_version())"


echo "\n30 - INPUT >./semver.exe -s \"1.1\""
./semver.exe -s "1.1"

echo "\n31 - INPUT >./semver.exe -s \"1.0.1l.1.1\""
./semver.exe -s "1.0.1l.1.1"

echo "\n32 - INPUT >./semver.exe -s \"1.?1.1-alpha.1.1-beta\""
./semver.exe -s "1.?1.1-alpha.1.1-beta"

echo "\n33 - INPUT >./semver.exe -s \"bonjour\""
./semver.exe -s "bonjour"

echo "\n36 - INPUT >./semver.exe -v \"079.1\""
./semver.exe -s "079.1"

echo "\n37 - INPUT >./semver.exe -v \"2+4\""
./semver.exe -s "2+4"

echo "\n38 - INPUT >./semver.exe -v \"   1.1.1-alpha.1.1-beta\""
./semver.exe -s "   1.1.1-alpha.1.1-beta"

echo "\n39 - INPUT >./semver.exe -v \"konichiwa.2.0\""
./semver.exe -s "konichiwa.2.0"



echo "\nC flag\n42 - INPUT >./semver.exe -c \"1.7.9 1.3.5 0.0.2\""
./semver.exe -c "1.7.9 1.3.5 0.0.2"

echo "\n43 - INPUT >./semver.exe -c \"1.6 1.6.3\""
./semver.exe -c "1.6 1.6.3"

echo "\n44 - INPUT >./semver.exe -c \"1.1.1-alpha 1.0.1l.1.1 1.1.1-beta\""
./semver.exe -c "1.1.1-alpha 1.0.1l.1.1 1.1.1-beta"

echo "\n45 - INPUT >./semver.exe -c \"1.1.1-alpha   \""
./semver.exe -c "1.1.1-alpha   "

echo "\n46 - INPUT >./semver.exe -c \"1.0.0-beta+exp.sha.5114   1.0-beta+exp.sha.5114f85\""
./semver.exe -c "1.0.0-beta+exp.sha.5114   1.0-beta+exp.sha.5114f85"

echo "\n47 - INPUT >./semver.exe -c \"0.0.0-x.2.z.92  1.0.0x.7.z.92\""
./semver.exe -c "0.0.0-x.2.z.92  1.0.0x.7.z.92"