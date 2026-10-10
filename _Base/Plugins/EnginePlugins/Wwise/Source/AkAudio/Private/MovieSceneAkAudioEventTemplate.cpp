#include "MovieSceneAkAudioEventTemplate.h"
#include "MovieSceneAkAudioEventSection.h"

FMovieSceneAkAudioEventTemplate::FMovieSceneAkAudioEventTemplate()
    : Section(nullptr)
{
}

FMovieSceneAkAudioEventTemplate::FMovieSceneAkAudioEventTemplate(
    const UMovieSceneAkAudioEventSection* InSection)
    : Section(const_cast<UMovieSceneAkAudioEventSection*>(InSection))
{
}