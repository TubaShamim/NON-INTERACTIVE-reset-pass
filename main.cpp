#include <iostream>
#include <curses.h> 
 
using std::cout;  
using std::endl; 

void name(){
	mvprintw(4,4,"Username");

	WINDOW* ebox = newwin(3, 36, 3, 25);
	refresh();
	box(ebox, 0, 0);
	wrefresh(ebox);
}
 
void age(){
	mvprintw(7,4,"User age");

	WINDOW* ebox = newwin(3, 36, 6, 25);
	refresh();
	box(ebox, 0, 0);
	wrefresh(ebox);
}

void registration(){
	// initialise
	// setup memory and clear screen
	initscr();

	// refresh screen to match memory

	int x=0, y=1, w=67, h=25;

	WINDOW *win = newwin(h,w,y,x);

	refresh();
	move(1, 24);
	
	attron(A_BOLD);
	printw("REFRESH PASSWORD");
	attron(A_BOLD);

	box(win, 0, 0); 
	wrefresh(win);
} 

void displayEmail(){
	mvprintw(10,4,"User email");

	WINDOW* ebox = newwin(3, 36, 9, 25);
	refresh();
	box(ebox, 0, 0);
	wrefresh(ebox);
}
void displayPassword(){
	mvprintw(13, 4, "New Password");

	WINDOW* pbox = newwin(3, 36, 12, 25);
	refresh();
	box(pbox, 0, 0);
	wrefresh(pbox);
}
 
void displayPassword2(){
	mvprintw(16, 4, "Confirm New Password");

	WINDOW* pbox = newwin(3, 36, 15, 25);
	refresh();
	box(pbox, 0, 0);
	wrefresh(pbox);
}

void displayOkCancel(){
	WINDOW* obox = newwin(3, 10, 20, 18);
	refresh();
	box(obox, 0, 0);
	mvwprintw(obox, 1, 1, "   Ok");
	wrefresh(obox);


	WINDOW* cbox = newwin(3, 10, 20, 39);
	refresh();
	box(cbox, 0, 0);
	mvwprintw(cbox,1, 1, " Cancel");
	wrefresh(cbox);
}  

int main(){

    registration();
    name();
    age();
    displayEmail();
    displayPassword();
		displayPassword2();
		displayOkCancel();
	getch();

	//deallocate memory and ends ncurses
	endwin();
	return 0;
}