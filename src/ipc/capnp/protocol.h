// Copyright (c) 2021 The Samcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SAMCOIN_IPC_CAPNP_PROTOCOL_H
#define SAMCOIN_IPC_CAPNP_PROTOCOL_H

#include <memory>

namespace ipc {
class Protocol;
namespace capnp {
std::unique_ptr<Protocol> MakeCapnpProtocol();
} // namespace capnp
} // namespace ipc

#endif // SAMCOIN_IPC_CAPNP_PROTOCOL_H
