#include "MovieSceneAkAudioRTPCTrack.h"
#include "MovieSceneAkAudioRTPCSection.h"
#include "MovieSceneAkAudioRTPCTemplate.h"

UMovieSceneAkAudioRTPCTrack::UMovieSceneAkAudioRTPCTrack() {}

FMovieSceneEvalTemplatePtr UMovieSceneAkAudioRTPCTrack::CreateTemplateForSection(
    const UMovieSceneSection& InSection) const
{
    return FMovieSceneAkAudioRTPCTemplate(
        CastChecked<const UMovieSceneAkAudioRTPCSection>(&InSection));
}