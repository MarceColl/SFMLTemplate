#ifndef _SYSTEM_
#define _SYSTEM_


class System {
public:
	System();

	void update(float deltaTime);

protected:
	virtual void _update(float deltaTime);
};


#endif
