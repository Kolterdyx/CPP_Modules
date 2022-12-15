

all:
	find . -type dir -name "ex*" | xargs -I{} make -C {}

clean:
	find . -type dir -name "ex*" | xargs -I{} make -C {} clean

fclean:
	find . -name "*.dSYM" | xargs rm -rf
	find . -type dir -name "ex*" | xargs -I{} make -C {} fclean

re:
	find . -type dir -name "ex*" | xargs -I{} make -C {} re