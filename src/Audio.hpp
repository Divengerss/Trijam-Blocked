//
// Created by dorviande on 1/29/23.
//

#ifndef TRIJAM_BLOCKED_AUDIO_HPP
#define TRIJAM_BLOCKED_AUDIO_HPP

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

namespace bmt {
    class Audio {
    public:
        Audio();
        Audio(const std::string &path, float volume, bool loop);
        ~Audio() = default;

        sf::Sound &getSound();

    private:
        std::string _path;
        sf::SoundBuffer _sndBuf;
        sf::Sound _snd;
        float _volume;
        bool _loop;
    };
}

#endif //TRIJAM_BLOCKED_AUDIO_HPP
