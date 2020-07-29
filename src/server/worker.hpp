/**
 * @file : worker.hpp
 * @author : Kartik Dutt
 *
 * Runs io_service and blocks access of other processes
 * to current thread using mutex lock.
 */

#ifndef WORKER_THREAD_HPP
#define WORKER_THREAD_HPP

#include <thread>
#include <mutex>

class WorkerThread
{

};

std::mutex WorkerThread::m;
#endif