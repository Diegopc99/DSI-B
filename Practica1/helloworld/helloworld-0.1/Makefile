prefix = /usr
all: src/helloworld
src/helloworld: src/helloworld.c
	@echo "CFLAGS=$(CFLAGS)" | \
		fold -s -w 70 | \
		sed -e "s/^/# /"
	$(CC) $(CPPFLAGS) $(CFLAGS) $(LDCFLAGS) -o $@ $^
install: src/helloworld
	install -D src/helloworld \
		$(DESTDIR)$(prefix)/bin/helloworld
clean:
	-rm -f src/helloworld
distclean: clean
uninstall:
	-rm -f $(DESTDIR)$(prefix)/bin/helloworld
.PHONY: all install clean distclean uninstall
