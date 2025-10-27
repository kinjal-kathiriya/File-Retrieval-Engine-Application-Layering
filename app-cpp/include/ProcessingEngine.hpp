#ifndef PROCESSING_ENGINE_H
#define PROCESSING_ENGINE_H

#include <memory>

#include "IndexStore.hpp"

class ProcessingEngine {
    // TO-DO keep track of the index store
    std::shared_ptr<IndexStore> store;

    public:
        // constructor
        ProcessingEngine(std::shared_ptr<IndexStore> store);

        // default virtual destructor
        virtual ~ProcessingEngine() = default;

        // TO-DO re-declare index files and search files methods
        void indexFiles();
        void searchFiles();
};

#endif