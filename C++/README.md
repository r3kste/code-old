Formatter: astyle
`
astyle "*.cpp" -p -jfq -xg -xe -xb -xd --style=break --recursive -n
`

Runner: g++
`
g++ "$fileName" -o ".$fileNameWithoutExt" && ./.$fileNameWithoutExt
`
