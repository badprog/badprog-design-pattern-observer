#ifndef __BADPROG_IOBSERVER_H__
#define	__BADPROG_IOBSERVER_H__

#include <string>
// Badprog.com

using namespace std;

class IObserver {
public:

	virtual ~IObserver() {};
	virtual void update(const string &messageFromSubject) = 0;	// VP
};

#endif // __BADPROG_IOBSERVER_H__