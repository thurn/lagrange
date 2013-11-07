SHELL=/bin/zsh

build: clean
	mkdir -p out/
	cd src/ && /usr/local/j2objc/j2objc --no-package-directories -classpath "/usr/local/j2objc/lib/junit-4.10.jar" --prefixes ../prefixes.properties -use-arc --build-closure -d ../out/ **/*.java
	# TODO: Figure out why this is generated wrong.
	perl -p -i -e 's{JUnitCore.h}{org/junit/runner/JUnitCore.h}g' out/FirebaseTest.m


clean:
	rm -r out/
