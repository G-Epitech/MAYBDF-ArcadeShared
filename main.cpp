
#include <iostream>
#include <string>
#include <map>
#include <memory>
#include "types/Vector.hpp"
#include "graphics/IGraphicsProvider.hpp"

typedef void* UId;

class MyEvent: public shared::graphics::events::IEvent
{
    public:
        MyEvent(){
            static int counter = 0;

            id = counter;
            std::cout << "MyEvent created: " << counter << std::endl;
            counter += 1;
        };
        ~MyEvent(){
            std::cout << "MyEvent destroyed" << std::endl;
        };

        UId getId() const noexcept
        {
            return (void *) this;
        }

        shared::graphics::events::EventType getType() const noexcept override
        {
            std::cout << "MyEvent getType: " << id << std::endl;
            return shared::graphics::events::EventType::MOUSE_BTN_PRESS;
        }
private:
    int id;
};

class MyWindow: public shared::graphics::IWindow
{
    public:
        MyWindow(): size(800, 600) {
            title = "MyWindow";
            fps = 60;
            icon = "icon";
            mode = shared::graphics::IWindow::WindowMode::WINDOWED;
        };
        ~MyWindow(){};

        void setTitle(const std::string &title) override
        {
            this->title = title;
        }

        std::string getTitle() const override
        {
            return title;
        }

        void setSize(shared::types::Vector2u size) override
        {
            this->size = size;
        }

        shared::types::Vector2u getSize() const override
        {
            return size;
        }

        void setFramerateLimit(unsigned int fps) override
        {
            this->fps = fps;
        }

        unsigned int getFramerateLimit() const override
        {
            return fps;
        }

        void setIcon(const std::string &icon) override
        {
            this->icon = icon;
        }

        const std::string &getIcon() const override
        {
            return icon;
        }

        void setMode(WindowMode mode) override
        {
            this->mode = mode;
        }

        WindowMode getMode() const override
        {
            return mode;
        }

        void render(const shared::graphics::EntityProps &entityProps) override
        {
            std::cout << "Rendering entity" << std::endl;
        }

        void clear() override
        {
            std::cout << "Clearing window" << std::endl;
        }

        void display() override
        {
            std::cout << "Displaying window" << std::endl;
        }

        bool isOpen() const override
        {
            return true;
        }

        void close() override
        {
            std::cout << "Closing window" << std::endl;
        }

        std::vector<std::unique_ptr<shared::graphics::events::IEvent>> getEvents() override
        {
            std::map<UId, std::shared_ptr<shared::graphics::events::IEvent>> events;
            std::shared_ptr<MyEvent> event1 = std::make_shared<MyEvent>();
            std::shared_ptr<MyEvent> event2 = std::make_shared<MyEvent>();
            std::shared_ptr<MyEvent> event3 = std::make_shared<MyEvent>();
            std::shared_ptr<MyEvent> event4 = std::make_shared<MyEvent>();


            events[event1->getId()] = event1;
            events[event2->getId()] = event2;
            events[event3->getId()] = event3;
            events[event4->getId()] = event4;

            auto evt = events.at(event1->getId());
            std::cout << "Event type: " << evt->getType() << std::endl;
            // events.push_back(std::move(event));
            // events.push_back(std::make_unique<MyEvent>());
            // events.push_back(std::make_unique<MyEvent>());
            // events.push_back(std::make_unique<MyEvent>());

            
            return std::vector<std::unique_ptr<shared::graphics::events::IEvent>>();
        }


    private:
        std::string title;
        shared::types::Vector2u size;
        unsigned int fps;
        std::string icon;
        WindowMode mode;
};

class MyProvider: public shared::graphics::IGraphicsProvider
{
    public:
        const shared::graphics::GraphicsManifest &getManifest(void) const noexcept override
        {
            return manifest;
        }

        std::unique_ptr<shared::graphics::IWindow> createWindow(const shared::graphics::IWindow::WindowInitProps &windowProps) override
        {
            return std::make_unique<MyWindow>();
        }

        std::shared_ptr<shared::graphics::ISound> createSound(const std::string &path) override
        {
            return nullptr;
        }

        std::shared_ptr<shared::graphics::ITexture> createTexture(const std::string &bin, const std::string &ascii) override
        {
            return nullptr;
        }

    private:
        shared::graphics::GraphicsManifest manifest;
};

int main(void)
{

    MyProvider provider;
    std::cout << provider.getManifest().name << std::endl;
    std::unique_ptr<shared::graphics::IWindow> window = provider.createWindow({{800, 600}, shared::graphics::IWindow::WindowMode::WINDOWED, 60, "MyWindow", "icon"});

    auto e = window->getEvents();
    for (auto &evt: e) {
        auto event = std::reinterpret_pointer_cast<MyEvent>(evt);
        std::cout << "Event type: " << evt->getType() << std::endl;
    }
    return 0;
}