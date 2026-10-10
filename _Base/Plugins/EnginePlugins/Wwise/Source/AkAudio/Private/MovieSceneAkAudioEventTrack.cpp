#include "MovieSceneAkAudioEventTrack.h"
#include "MovieSceneAkAudioEventSection.h"
#include "MovieSceneAkAudioEventTemplate.h"

UMovieSceneAkAudioEventTrack::UMovieSceneAkAudioEventTrack() {}

FMovieSceneEvalTemplatePtr UMovieSceneAkAudioEventTrack::CreateTemplateForSection(
    const UMovieSceneSection& InSection) const
{
    return FMovieSceneAkAudioEventTemplate(
        CastChecked<const UMovieSceneAkAudioEventSection>(&InSection));
}