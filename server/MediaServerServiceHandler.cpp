/*
kmsc - Kurento Media Server C/C++ implementation
Copyright (C) 2012 Tikal Technologies

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License version 3
as published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "MediaServerServiceHandler.h"

using ::kurento::MediaServerServiceHandler;
using ::kurento::MediaObject;
using ::kurento::MediaType;

MediaServerServiceHandler::MediaServerServiceHandler()
{
	
}

MediaServerServiceHandler::~MediaServerServiceHandler()
{
	
}


void
MediaServerServiceHandler::ping(const MediaObject& resource, const int32_t timeout)
{
	
}

void
MediaServerServiceHandler::release(const MediaObject& mediaObject)
{
	
}


void
MediaServerServiceHandler::createMediaFactory(MediaObject& _return)
{
	
}

void
MediaServerServiceHandler::createMediaPlayer(MediaObject& _return, const MediaObject& mediaFactory)
{
	
}

void
MediaServerServiceHandler::createMediaRecorder(MediaObject& _return, const MediaObject& mediaFactory)
{
	
}

void
MediaServerServiceHandler::createStream(MediaObject& _return, const MediaObject& mediaFactory)
{
	
}

void
MediaServerServiceHandler::createMixer(MediaObject& _return, const MediaObject& mediaFactory)
{
	
}


MediaType::type
MediaServerServiceHandler::getMediaType(const MediaObject& mediaElement)
{
	return MediaType::AUDIO;
}

void
MediaServerServiceHandler::connect(const MediaObject& mediaSrc, const MediaObject& mediaSink)
{
	
}

void
MediaServerServiceHandler::disconnect(const MediaObject& src, const MediaObject& mediaSink)
{
	
}

void
MediaServerServiceHandler::getConnectedSinks(std::vector<MediaObject> & _return, const MediaObject& mediaSrc)
{
	
}

void
MediaServerServiceHandler::getConnectedSrc(MediaObject& _return, const MediaObject& mediaSink)
{
	
}


void
MediaServerServiceHandler::join(const MediaObject& joinableA, const MediaObject& joinableB)
{
	
}

void
MediaServerServiceHandler::unjoin(const MediaObject& joinableA, const MediaObject& joinableB)
{
	
}

void
MediaServerServiceHandler::getMediaSrcs(std::vector<MediaObject> & _return, const MediaObject& joinable)
{
	
}

void
MediaServerServiceHandler::getMediaSinks(std::vector<MediaObject> & _return, const MediaObject& joinable)
{
	
}

void
MediaServerServiceHandler::getMediaSrcsByMediaType(std::vector<MediaObject> & _return, const MediaObject& joinable, const MediaType::type mediaType)
{
	
}

void
MediaServerServiceHandler::getMediaSinksByMediaType(std::vector<MediaObject> & _return, const MediaObject& joinable, const MediaType::type mediaType)
{
	
}


void
MediaServerServiceHandler::play(const MediaObject& mediaPlayer)
{
	
}

void
MediaServerServiceHandler::pausePlayer(const MediaObject& mediaPlayer)
{
	
}

void
MediaServerServiceHandler::stopPlayer(const MediaObject& mediaPlayer)
{
	
}


void
MediaServerServiceHandler::record(const MediaObject& mediaRecorder)
{
	
}

void
MediaServerServiceHandler::pauseRecorder(const MediaObject& mediaRecorder)
{
	
}

void
MediaServerServiceHandler::stopRecorder(const MediaObject& mediaRecorder)
{
	
}


void
MediaServerServiceHandler::generateOffer(std::string& _return, const MediaObject& stream)
{
	
}

void
MediaServerServiceHandler::processAnswer(std::string& _return, const MediaObject& stream, const std::string& anwser)
{
	
}

void
MediaServerServiceHandler::processOffer(std::string& _return, const MediaObject& stream, const std::string& offer)
{
	
}

void
MediaServerServiceHandler::getLocalDescriptor(std::string& _return, const MediaObject& stream)
{
	
}

void
MediaServerServiceHandler::getRemoteDescriptor(std::string& _return, const MediaObject& stream)
{
	
}


void
MediaServerServiceHandler::getMixerPort(MediaObject& _return, const MediaObject& mixer)
{
	
}

void
MediaServerServiceHandler::getMixer(MediaObject& _return, const MediaObject& mixerPort)
{
	
}
