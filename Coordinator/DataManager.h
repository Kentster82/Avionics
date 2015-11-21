// Copyright (c) 2015:
// Jason Watkins <watkins1@uci.edu>
// Iniyavan Sathiamurthi <isathiam@uci.edu>
// Kelly Ho <doankhah@uci.edu>
// Kyle Lam <kylehl1@uci.edu>
//
// Permission to use, copy, modify, and/or distribute this software for any
// purpose with or without fee is hereby granted, provided that the above
// copyright notice and this permission notice appear in all copies.
//
// THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
// WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
// ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
// WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
// ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
// OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

#ifndef COORDINATOR_DATAMANAGER_H
#define COORDINATOR_DATAMANAGER_H

#include "Arduino.h"

namespace DataManager
{
	typedef void(*DataCallback)(void*, size_t);

	void Publish(const String& key, void* data, std::size_t len);

	void Subscribe(const String& key, DataCallback callback);
}

#endif