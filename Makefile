



all:
	find . -type d -name "ex*" | xargs -I{} make -C {}

clean:
	find . -type d -name "ex*" | xargs -I{} make -C {} clean

fclean:
	find . -name "*.dSYM" | xargs rm -rf
	find . -type d -name "ex*" | xargs -I{} make -C {} fclean

re:
	find . -type d -name "ex*" | xargs -I{} make -C {} re