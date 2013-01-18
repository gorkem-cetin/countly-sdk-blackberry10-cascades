/*
 * CountlyLogStream.cpp
 *
 *  Created on: 18 Jan 2013
 *      Author: craig
 */

#include "CountlyLogStream.hpp"
#include <QObject>

#include "CountlyLog.hpp"


namespace countly {

CountlyLogStream::CountlyLogStream(CountlyLog *log, LogLevel::Level level) : _log(log), _level(level), _message() {
}

CountlyLogStream::~CountlyLogStream() {
	_log->log(_level, _message.str().c_str());
}

} /* namespace countly */
