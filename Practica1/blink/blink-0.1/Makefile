CC=g++
prefix = /usr
all: src/blink
src/blink: src/blink.cpp
	@echo "CFLAGS=$(CFLAGS)" | \
		fold -s -w 70 | \
		sed -e "s/^/# /"
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LDCFLAGS) -o $@ $^
install: src/blink
	install -D src/blink \
		$(DESTDIR)$(prefix)/bin/blink
clean:
	-rm -f src/blink
distclean: clean
uninstall:
	-rm -f $(DESTDIR)$(prefix)/bin/blink
.PHONY: all install clean distclean uninstall
