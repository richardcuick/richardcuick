#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "                ********" << endl;
	cout << "               ************" << endl;
	cout << "               ####....#." << endl;
	cout << "             #..###.....##...." << endl;
	cout << "             ###.......######              ###            ###" << endl;
	cout << "                ...........               #...#          #...#" << endl;
	cout << "               ##*#######                 #.#.#          #.#.#" << endl;
	cout << "            ####*******######             #.#.#          #.#.#" << endl;
	cout << "           ...#***.****.*###....          #...#          #...#" << endl;
	cout << string(11,' ') << string(4,'.') << string(10,'*') << string(2,'#') << string(5,'.') << string(11,' ') << string(3,'#') << string(12,' ') << string(3,'#') << endl;
	cout << string(11,' ') << string(4,'.') << string(4,'*') << string(4,' ') << string(5,'*') << string(4,'.') << endl;
	cout << string(13,' ') << string(4,'#') << string(8,' ') << string(4,'#') << endl;
	cout << string(11,' ') << string(6,'#') << string(8,' ') << string(6,'#') << endl;
	cout << string(62,'#') << endl;
	cout << "#" << string(3,'.') << "#" << string(6,'.') << "#.##...#......#.##...#......#.##" << string(18,'-') << "#" << endl;
	cout << string(43,'#') << string(18,'-') << "#" << endl;
	cout << "#..#....#....##..#....#....##..#....#....#####################" << endl;
	cout << "##########################################    #----------#" << endl;
	cout << "#.....#......##.....#......##.....#......#    #----------#"<< endl;
	cout << "##########################################    #----------#" << endl;
	cout << "#.#..#....#..##.#..#....#..##.#..#....#..#    #----------#" << endl;
	cout << "##########################################    ############" << endl;
	return 0;
}