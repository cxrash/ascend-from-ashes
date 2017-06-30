#include <iostream>
#include <fstream>
#include <ncurses.h>
#include <string>
using namespace std;

	/**+.
     ** : "..from ashes"
    **  :  tactical rpg
     *+,:   by cxrash
      *+:    (c) 2 0 1 7 
     ** `     junkyard       
    ** ,~`'+~, diversions
     */


  /*   
  *  set up classes to store info
   * on pcs, npcs and mobs
  */
 
class actor { 	  /*  	 ,;!' parent class `';. ,~    */
	public:        	     /*    ~~~~~~~~~~~~    */
	 int refNo;    			/*  001- 300 mobs 301-999 players	 	   
	 						   : 1000-2000 npca			   
	 						   : 2001-9999 summons 					*/

};


class player: public actor {
	 
	 int level;				/* 1								 	*/
	 int exp;	  			/* 1									 */
	 int hpMax;				/* total hitpoints when fully healed 	*/
	 int hp;	   			/* current hp 						   */
	 int mpMax;				/* total magic/focus when fully rested   */
	 int mp;	   			/* current mp 						   */
	 double bank;  			/* total gold			   		    */
	 string summons;   		/* known summons. 				   	*/
	 int party[5];   	      /* your party of up to 5 summons/hires   */
	 string inventory[30];	  /* your items and/or loot 			   */
};


class ally: public actor {
	 int level;	/* 1									 	*/
	 int exp;	  /* 1									 	*/
	 int hpMax;	/* total hitpoints when fully healed 		*/
	 int hp;	   /* current hp 				 			  */
	 int mpMax;	/* total magic/focus when fully rested	   */
	 int mp;	   /* current mp 						 	  */
};


class mob: public actor {
	 int level;	/* 1								 		*/
	 int exp;	  /* 1									 	*/
	 int hpMax;	/* total hitpoints when fully healed	 	*/
	 int hp;	   /* current hp 						 	  */
	 int mpMax;	/* total magic/focus when fully rested 	  */
	 int mp;	   /* current mp 						 	  */
	 double bank;  /* total gold					 		   */
};


class item {
	public:
	
	void doStuff() {	
		string type = "a";
		int index = 100;
		string name = "ascetic's robes";
		int cost = 4;
		int def = 1;
		string stat = "MIND";
		int bonus = 1;
		string classes = "Ma Mo Cl";
		string descr = "nasty old monk robe.";
	      string str;
	      str = type + ".dat";
	      cout << str << endl;        
    	ofstream outfile;
		outfile.open(type + ".dat");
    	outfile << index << '|' << name << '|' << cost << '|' << def << '|' << stat << '|' << bonus << '|' << classes << '|' << descr << endl;
    	outfile.close();
 };   
};

int main() {
	item myitem;
	myitem.doStuff();
	return 0;
}


