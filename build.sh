#!/bin/zsh
mkdir -p out/
cd src/
/usr/local/j2objc/j2objc --no-package-directories --prefixes prefixes.properties -use-arc --build-closure -d ../out/ **/*.java
