# 每天坚持学习一点算法知识并有个小例子

第一部分：AlgorithmGossip

第二部分：



VScode中的运行方式：

第一种
```g++ hello.cpp -o hello   #hello.cpp是你要编译的文件名，后面的hello是编译生成的二进制exe文件```
回车，此时会在目录中生成一个可执行的exe文件。
再在终端中输入
```./hello
或：
./hello.exe ```

第二种
Step 1 配置launch.json

``` 
{
  "version": "0.2.0",
  "configurations": [
    {
      "name": "(gdb) Launch",
      "preLaunchTask": "Build",
      "type": "cppdbg",
      "request": "launch",
      "targetArchitecture": "x86_64",
      "program": "${fileDirname}/${fileBasenameNoExtension}.exe",
      "miDebuggerPath": "c:\\MinGW\\bin\\gdb.exe",
      "args": [],
      "stopAtEntry": false,
      "cwd": "${workspaceFolder}",
      "environment": [],
      "externalConsole": true,
      "MIMode": "gdb",
      "setupCommands": [
        {
          "description": "Enable pretty-printing for gdb",
          "text": "-enable-pretty-printing",
          "ignoreFailures": true
        }
      ]
    }
  ]
}
```

Step 2 配置tasks.json
```
{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "Build",
      "type": "shell",
      "presentation": {
        "echo": true,
        "reveal": "always",
        "focus": false,
        "panel": "shared"
      },
      "windows": {
        "command": "g++",
        "args": [
          "-ggdb",
          "\"${file}\"",
          "--std=c++11",
          "-o",
          "\"${fileDirname}\\${fileBasenameNoExtension}.exe\""
        ]
      },
      "group":{
        "kind": "build",
        "isDefault": true
      }
    }
  ]
}
```