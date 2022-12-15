

all:
	find . -type dir -name "ex*" | xargs -I{} make -C {}

clean:
	find . -type dir -name "ex*" | xargs -I{} make -C {} clean

fclean:
	find . -type dir -name "ex*" | xargs -I{} make -C {} fclean
	find . -name "*.dSYM" | xargs rm -rf

re:
	find . -type dir -name "ex*" | xargs -I{} make -C {} re