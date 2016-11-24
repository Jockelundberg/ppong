#include <ncurses.h>
#include "grafik.h"


static void init_curses(void)
{
	initscr();
	cbreak();
	noecho();
	nodelay(stdscr, TRUE);
	scrollok(stdscr, FALSE);
	curs_set(0);
}

static void end_curses(void)
{
	flushinp();
	erase();
	refresh();
	endwin();
}

void starta_grafik()
{
    init_curses();
}

void stada_upp_grafik()
{
    end_curses();
}
