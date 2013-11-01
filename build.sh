#!/bin/zsh
mkdir -p out/
cd src/
../j2objc/j2objc --prefixes prefixes.properties -use-arc --build-closure -d ../out/ **/*.java
