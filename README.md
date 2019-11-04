# Semver (Semantic Version)
Semver is a library contatining functions that allow for creation of a Semantic Version data-type (t_version), the conversion
of a (t_version) to a string, as well as compare two t_versions. <br>***-reference proper fomatting @ https://semver.org/***

The functions used are: <br>`compare_precedence(char *string)`<br>`version_to_string(t_version *version)`<br>`string_to_version(char *string)`<br>`compare_versions(t_version *v1, t_version *v2)`<br><br>
Prerequisites: Make sure you have the latest version of gcc:<br>`sudo apt install build-essential`  &&  `gcc -v`<br><br>
Methods are accessed as follows:<br>
1) Clone into repo `git clone https://github.com/coolguycam/semver.git`
2) Use the command `make` to create the exectutable "semver.exe"<br>
    <br>Test the string_to_version() function using the '-s' flag:<br>
    ```console 
    $> ./semver.exe -s "1.1.1"
    ```
    <br>Test the version_to_string() function using the '-v' flag:<br>
    ``` console
    $> ./semver.exe -v "1.1.1"
    ```
    <br>Test the compare_precedence() function using the '-c' flag:<br>
    ``` console
    $> ./semver.exe -c "1.1.1 1.2.1"
    ```
    <br><br>
    
   * **There is a test.sh file with pre-made test cases, but<br>* please feel free to try and break my code :)**
