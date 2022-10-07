# ![MAINICON](/res/echo64.png) echo64
A simple character substitution cipher that replaces a character with the 64th character after it in the Standard ASCII table.

## Instalation
To use echo64 as a cmd or powershell command, just unzip echo64.exe and add it to your System32 folder. You can also create a unique folder for the program and add that folder to your PATH environment variable.

## Usage
```shell
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
Simple usage just passing a string to encrypt or decrypt.


```shell
> echo64 Hello
> w6==@
> 
> echo64 w6==@
> Hello
```

Encrypts a string and saves it to a file. Then use echo64 to read the encrypted contents of the file.

```shell
> echo64 Hello From File > Hello.txt
> 
> type Hello.txt
> w6==@OuC@>Ou:=6
>
> echo64 /F:Hello.txt
> Hello From File
```
