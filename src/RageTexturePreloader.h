#ifndef RAGE_TEXTURE_PRELOADER_H
#define RAGE_TEXTURE_PRELOADER_H

class RageTexture;
struct RageTextureID;
/** @brief Load the textures in advance for using them later. */
class RageTexturePreloader
{
public:
	RageTexturePreloader(): m_apTextures() { }
	RageTexturePreloader( const RageTexturePreloader &cpy ):
		m_apTextures(cpy.m_apTextures) { }
	RageTexturePreloader &operator=( const RageTexturePreloader &rhs );
	~RageTexturePreloader();
	void Load( const RageTextureID &ID );
	void UnloadAll();
	void Swap( RageTexturePreloader &rhs ) { swap( m_apTextures, rhs.m_apTextures ); }

private:
	std::vector<RageTexture*> m_apTextures;
};

#endif

/*
 * (c) 2005 Glenn Maynard
 * All rights reserved.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, and/or sell copies of the Software, and to permit persons to
 * whom the Software is furnished to do so, provided that the above
 * copyright notice(s) and this permission notice appear in all copies of
 * the Software and that both the above copyright notice(s) and this
 * permission notice appear in supporting documentation.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT OF
 * THIRD PARTY RIGHTS. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR HOLDERS
 * INCLUDED IN THIS NOTICE BE LIABLE FOR ANY CLAIM, OR ANY SPECIAL INDIRECT
 * OR CONSEQUENTIAL DAMAGES, OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS
 * OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR
 * OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */
