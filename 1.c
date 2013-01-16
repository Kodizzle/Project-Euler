/*
 * Copyleft none (c) 2013 Aperture Laboratories, Inc. All rights free.
 *
 * @TROLLING_LICENSE
 * This file contains Original code of Tine,if you want pirate free, 
 * You are a pirate.
 *
 *
 *
 * The latest innovation in human-developing interaction. Our scientist have
 * shown in extensive tests that humans operating our fail project  on their
 * PC experience 33% more joy in life while smimultaneosly the likelihood of
 * being maimed or killed by falling pace debris is significantly reduced.
 * Also preliminary human trial indicate that it might offer some protection
 * against lethal dosages of gamma radiation and blows to  the head  with  a
 * rodlike object
 *
 * Kodizzle <not(dot)kodizzle(at)gmail(dot)com>
 * 
 * Problem: 
 * If we list all the natural numbers below 10 that are multiples 
 * of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 *
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */

#include <stdio.h>
#include <stdlib.h>


#define __BELOW		1000

int x;
long int s = 0;
int main() {
	for ( x = 1; x < __BELOW ; x++)
		if ( ( x % 3 == 0 ) || ( x % 5 == 0 ) )
			s += x;
	printf("s: %ld\n",s);
	return 0;
}
