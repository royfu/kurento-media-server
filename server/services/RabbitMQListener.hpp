/*
 * (C) Copyright 2014 Kurento (http://kurento.org/)
 *
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the GNU Lesser General Public License
 * (LGPL) version 2.1 which accompanies this distribution, and is available at
 * http://www.gnu.org/licenses/lgpl-2.1.html
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 */

#ifndef __RABBITMQ_LISTENER_HPP__
#define __RABBITMQ_LISTENER_HPP__

#include "RabbitMQConnection.hpp"

namespace kurento
{

class RabbitMQListener
{
public:
  RabbitMQListener () {};
  RabbitMQListener (const std::string &address, int port);
  virtual ~RabbitMQListener() throw ();

  void setConfig (const std::string &address, int port);
  void listenQueue (const std::string &queue);
  void stopListen ();

protected:
  virtual void processMessage (const std::string &message) = 0;

private:
  bool readMessages (Glib::IOCondition cond);

  std::shared_ptr <RabbitMQConnection> connection;
  Glib::RefPtr<Glib::IOSource> source;

  std::string address;
  int port;

  class StaticConstructor
  {
  public:
    StaticConstructor();
  };

  static StaticConstructor staticConstructor;
};

} /* kurento */

#endif /* __RABBITMQ_LISTENER_HPP__ */