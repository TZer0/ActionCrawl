#include "maptile.h"

MapTile::MapTile(TileSetManager *mgr)
{
	mDestroyed = false;
	for (int i = 0; i < 5; i++) {
		mSides[i] = mgr->getRandomActiveMaterial();
	}
}

MapTile::~MapTile()
{

}