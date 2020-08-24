#define OLC_PGE_APPLICATION

#include <search.h>
#include "olcPixelGameEngine.h"

class Example : public olc::PixelGameEngine
{
public:
    float deltaPixels = 0;
public:
	Example()
	{
		sAppName = "Example";
	}

public:
	bool OnUserCreate() override
	{
		// Called once at the start, so create things here
		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override
	{
	    //fElapsedTime: seconds since last exec
	    float velocity =30; // pix/sec
        // Clear Screen
        FillRect(0, 0, ScreenWidth(), ScreenHeight(), olc::Pixel(0, 0, 0));
		// called once per frame
//		for (int x = 0; x < ScreenWidth(); x++)
//			for (int y = 0; y < ScreenHeight(); y++)
//				Draw(x, y, olc::Pixel(rand() % 255, rand() % 255, rand()% 255));
        deltaPixels += velocity*fElapsedTime;
//        std::cout << lag << "\n";

        DrawCircle(olc::vi2d(50,50+deltaPixels),10);
		return true;
	}
};


int main()
{
	Example demo;
	if (demo.Construct(256, 240, 5, 5))
		demo.Start();

	return 0;
}
