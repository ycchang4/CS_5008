#include <iostream>
#include <cmath>
using namespace std;


int main() {

    /* 
    Q1: Write a program to convert second to hours, minutes, and seconds.
    */

   int time;
   cout << "Enter the time for an event in seconds ";
   cin >> time;
   cout << endl;
   
   // check for edge cases
   if (time < 0) {
    cout << "Not Valid" << endl;
   } else {
        int hour = time / 3600;
        int minute = (time % 3600) / 60;
        int second = time % 60;

        cout << " The total time is " << hour << ":" << minute << ":" << second <<endl;
    
   }



   /*
   Q2: A milk carton holds 3.78 L of milk
   cost of producing 1L = $0.38
   profit of each carton = $0.27
   */ 

  //a. prompts the user to enter the total amount of milk produced in the morning

  double produced;
  cout << "How much milk was produced this morning?";
  cin >> produced;
  cout << endl;

  //b. outputs the number of milk cartons needed to hold milk (round it).

  int cartons;
  cartons = round (produced / 3.78);

  cout << "The number of cartons produced in the morning " << cartons << endl;

  //c. Outputs the cost of producing milk
  double cost = 0.38 * produced;

  cout << "The cost of producing the milk is " << cost << endl;

  //d. Outputs the profit for producing milk

  double profit = 0.27 * cartons;
  cout << "The total profit is " << profit  << endl;
  
  /*
  Q3: 
  */
  
  return 0;

}