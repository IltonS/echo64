# ![MAINICON](/res/echo64.png) echo64
A simple character substitution cipher that replaces a character with the 64th character after it in the Standard ASCII table.

## Instalation
To use echo64 as a cmd or powershell command, just unzip echo64.exe and add it to your System32 folder. You can also create a unique folder for the program and add that folder to your PATH environment variable.

## Usage
```
ECHO64 [/V] [/?] [/F:file] [message]
```

#### /V          
Show program version.

#### /?
Show program help.

#### /F:file
Displays the encrypted contents of the file.

#### message
Specifies a message to encrypt.

## Examples
```
C:\>echo64 Hello
w6==@
```

```
C:\>echo64 Hello From File > Hello.txt

C:\>type Hello.txt
w6==@OuC@>Ou:=6

C:\>echo64 /F:Hello.txt
Hello From File
```
