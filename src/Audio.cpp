//
// Created by dorviande on 1/29/23.
//

#include "Audio.hpp"

bmt::Audio::Audio()
{
}

bmt::Audio::Audio(const std::string &path, float volume, bool loop) :
    _sndBuf(sf::SoundBuffer()), _snd(sf::Sound()), _volume(volume), _loop(loop)
{
    if (!_sndBuf.loadFromFile(path))
        throw std::runtime_error("Failed to load sound " + path);
    _snd.setBuffer(_sndBuf);
    _snd.setVolume(volume);
    _snd.setLoop(loop);
}

sf::Sound &bmt::Audio::getSound()
{
    return (_snd);
}