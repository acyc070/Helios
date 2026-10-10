#include "MovieSceneAkAudioRTPCTemplate.h"
#include "MovieSceneAkAudioRTPCSection.h"

FMovieSceneAkAudioRTPCTemplate::FMovieSceneAkAudioRTPCTemplate()
    : Section(nullptr)
{
}

FMovieSceneAkAudioRTPCTemplate::FMovieSceneAkAudioRTPCTemplate(
    const UMovieSceneAkAudioRTPCSection* InSection)
    : Section(const_cast<UMovieSceneAkAudioRTPCSection*>(InSection))
{
}