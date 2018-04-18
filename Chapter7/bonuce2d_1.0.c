/* bounce2d 1.0
 * bounce a character (default is 'o') around the screen
 * defined by some parameters
 *
 * user input: s slow down x component, S: slow y component
 *             f speed up x component, F: speed y component
 *             Q quit
 *
 * blocks on read, but timer tick sends SIGALRM caught by ball_move
 * build: cc bounce2d.c set_ticker.c -lcurses -o bounce2d
 */
#include<curses.h>
#include<signal.h>
#include"bounce.h"

struct ppball the_ball;

/** the main loop **/

void set_up();
void wrap_up();

int main(void)
{

}
