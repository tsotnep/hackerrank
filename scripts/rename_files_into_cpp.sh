find ./ -name '*' ! -name "*java*" ! -name "*Java*" ! -name "*.cpp" ! -name "*.sh" | while read line; 
do 
	git mv $line $line.cpp
done

